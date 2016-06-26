SUB_PATH := $(WEBRTC_SUBPATH)/rtc_base

LOCAL_SRC_FILES += $(SUB_PATH)/numerics/exp_filter.cc \
	$(SUB_PATH)/numerics/histogram_percentile_counter.cc \
	$(SUB_PATH)/asyncinvoker.cc \
	$(SUB_PATH)/asyncpacketsocket.cc \
	$(SUB_PATH)/asyncresolverinterface.cc \
	$(SUB_PATH)/asyncsocket.cc \
	$(SUB_PATH)/asynctcpsocket.cc \
	$(SUB_PATH)/asyncudpsocket.cc \
	$(SUB_PATH)/base64.cc \
	$(SUB_PATH)/bitbuffer.cc \
	$(SUB_PATH)/bufferqueue.cc \
	$(SUB_PATH)/bytebuffer.cc \
	$(SUB_PATH)/checks.cc \
	$(SUB_PATH)/copyonwritebuffer.cc \
	$(SUB_PATH)/crc32.cc \
	$(SUB_PATH)/criticalsection.cc \
	$(SUB_PATH)/cryptstring.cc \
	$(SUB_PATH)/event.cc \
	$(SUB_PATH)/event_tracer.cc \
	$(SUB_PATH)/fakeclock.cc \
	$(SUB_PATH)/file.cc \
	$(SUB_PATH)/file_posix.cc \
	$(SUB_PATH)/filerotatingstream.cc \
	$(SUB_PATH)/fileutils.cc \
	$(SUB_PATH)/firewallsocketserver.cc \
	$(SUB_PATH)/flags.cc \
	$(SUB_PATH)/helpers.cc \
	$(SUB_PATH)/httpbase.cc \
	$(SUB_PATH)/httpcommon.cc \
	$(SUB_PATH)/httpserver.cc \
	$(SUB_PATH)/ifaddrs-android.cc \
	$(SUB_PATH)/ifaddrs_converter.cc \
	$(SUB_PATH)/ipaddress.cc \
	$(SUB_PATH)/json.cc \
	$(SUB_PATH)/location.cc \
	$(SUB_PATH)/logging.cc \
	$(SUB_PATH)/logsinks.cc \
	$(SUB_PATH)/md5.cc \
	$(SUB_PATH)/md5digest.cc \
	$(SUB_PATH)/messagedigest.cc \
	$(SUB_PATH)/messagehandler.cc \
	$(SUB_PATH)/messagequeue.cc \
	$(SUB_PATH)/natserver.cc \
	$(SUB_PATH)/natsocketfactory.cc \
	$(SUB_PATH)/nattypes.cc \
	$(SUB_PATH)/nethelper.cc \
	$(SUB_PATH)/nethelpers.cc \
	$(SUB_PATH)/network.cc \
	$(SUB_PATH)/networkmonitor.cc \
	$(SUB_PATH)/nullsocketserver.cc \
	$(SUB_PATH)/openssladapter.cc \
	$(SUB_PATH)/openssldigest.cc \
	$(SUB_PATH)/opensslidentity.cc \
	$(SUB_PATH)/opensslstreamadapter.cc \
	$(SUB_PATH)/optionsfile.cc \
	$(SUB_PATH)/pathutils.cc \
	$(SUB_PATH)/physicalsocketserver.cc \
	$(SUB_PATH)/platform_file.cc \
	$(SUB_PATH)/platform_thread.cc \
	$(SUB_PATH)/proxyinfo.cc \
	$(SUB_PATH)/proxyserver.cc \
	$(SUB_PATH)/race_checker.cc \
	$(SUB_PATH)/random.cc \
	$(SUB_PATH)/rate_limiter.cc \
	$(SUB_PATH)/rate_statistics.cc \
	$(SUB_PATH)/ratelimiter.cc \
	$(SUB_PATH)/ratetracker.cc \
	$(SUB_PATH)/rtccertificate.cc \
	$(SUB_PATH)/rtccertificategenerator.cc \
	$(SUB_PATH)/sequenced_task_checker_impl.cc \
	$(SUB_PATH)/sha1.cc \
	$(SUB_PATH)/sha1digest.cc \
	$(SUB_PATH)/signalthread.cc \
	$(SUB_PATH)/sigslot.cc \
	$(SUB_PATH)/socketadapters.cc \
	$(SUB_PATH)/socketaddress.cc \
	$(SUB_PATH)/socketaddresspair.cc \
	$(SUB_PATH)/socketstream.cc \
	$(SUB_PATH)/ssladapter.cc \
	$(SUB_PATH)/sslfingerprint.cc \
	$(SUB_PATH)/sslidentity.cc \
	$(SUB_PATH)/sslstreamadapter.cc \
	$(SUB_PATH)/stream.cc \
	$(SUB_PATH)/string_to_number.cc \
	$(SUB_PATH)/stringencode.cc \
	$(SUB_PATH)/stringutils.cc \
	$(SUB_PATH)/task_queue_libevent.cc \
	$(SUB_PATH)/task_queue_posix.cc \
	$(SUB_PATH)/thread.cc \
	$(SUB_PATH)/thread_checker_impl.cc \
	$(SUB_PATH)/timestampaligner.cc \
	$(SUB_PATH)/timeutils.cc \
	$(SUB_PATH)/transformadapter.cc \
	$(SUB_PATH)/unixfilesystem.cc \
	$(SUB_PATH)/virtualsocketserver.cc \
	$(SUB_PATH)/weak_ptr.cc