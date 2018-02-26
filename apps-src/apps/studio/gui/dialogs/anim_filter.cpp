#define GETTEXT_DOMAIN "studio-lib"

#include "gui/dialogs/anim_filter.hpp"
#include "gui/dialogs/anim.hpp"

#include "display.hpp"
#include "gui/widgets/label.hpp"
#include "gui/widgets/window.hpp"
#include "gui/dialogs/combo_box.hpp"
#include "gettext.hpp"
#include "hero.hpp"

#include <boost/bind.hpp>

namespace gui2 {

REGISTER_DIALOG(studio, anim_filter)

tanim_filter::tanim_filter(display& disp, tanim2& anim)
	: disp_(disp)
	, anim_(anim)
{
}

void tanim_filter::pre_show(CVideo& video, twindow& window)
{
	find_widget<tlabel>(&window, "title", false).set_label(_("anim^Edit filter"));

	anim_.update_to_ui_filter_edit(window);

	connect_signal_mouse_left_click(
			  find_widget<tcontrol>(&window, "id", false)
			, boost::bind(
				&tanim_filter::do_id
				, this
				, boost::ref(window)));

	connect_signal_mouse_left_click(
			  find_widget<tcontrol>(&window, "save", false)
			, boost::bind(
				&tanim_filter::save
				, this
				, boost::ref(window)));
}

void tanim_filter::do_id(twindow& window)
{
	std::vector<std::string> items;

	items.push_back("");
	items.push_back("$attack_id");

	gui2::tcombo_box dlg(items, 0);
	dlg.show(disp_.video());
}

void tanim_filter::do_range(twindow& window)
{
	std::vector<std::string> items;

	items.push_back("");
	items.push_back("$range");

	gui2::tcombo_box dlg(items, 0);
	dlg.show(disp_.video());
}

void tanim_filter::do_align(twindow& window)
{
	const char* align_filter_names[] = {
		"none",
		"x",
		"non-x",
		"y",
		"non-y"
	};

	std::vector<std::string> items;
	std::vector<int> values;
	for (int i = ALIGN_NONE; i < ALIGN_COUNT; i ++) {
		items.push_back(align_filter_names[i]);
		values.push_back(i);
	}

	gui2::tcombo_box dlg(items, 0);
	dlg.show(disp_.video());
}

void tanim_filter::do_feature(twindow& window)
{
	std::stringstream ss;
	std::vector<std::string> items;
	std::vector<int> values;

	items.push_back("");
	values.push_back(HEROS_NO_FEATURE);

	gui2::tcombo_box dlg(items, 0);
	dlg.show(disp_.video());

	std::vector<int>& features = hero::valid_features();
	for (std::vector<int>::const_iterator it = features.begin(); it != features.end(); ++ it) {
		if (*it >= HEROS_BASE_FEATURE_COUNT) {
			continue;
		}
		ss.str("");
		ss << HERO_PREFIX_STR_FEATURE << *it;
		// dgettext("wesnoth-card", strstr.str().c_str())
		items.push_back(ss.str());
		values.push_back(items.size());
	}
}

void tanim_filter::save(twindow& window)
{
	anim_.from_ui_filter_edit(window);
	window.set_retval(twindow::OK);
}

} // namespace gui2

