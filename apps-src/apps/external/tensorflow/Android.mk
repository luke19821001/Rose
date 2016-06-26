SUB_PATH := external/tensorflow/tensorflow/contrib/lite

LOCAL_SRC_FILES +=  \
	$(SUB_PATH)/allocation.cc \
	$(SUB_PATH)/arena_planner.cc \
	$(SUB_PATH)/context.c \
	$(SUB_PATH)/error_reporter.cc \
	$(SUB_PATH)/graph_info.cc \
	$(SUB_PATH)/interpreter.cc \
	$(SUB_PATH)/model.cc \
	$(SUB_PATH)/optional_debug_tools.cc \
	$(SUB_PATH)/simple_memory_arena.cc \
	$(SUB_PATH)/string_util.cc \
	$(SUB_PATH)/downloads/farmhash/src/farmhash.cc \
	$(SUB_PATH)/kernels/internal/optimized/neon_tensor_utils.cc \
	$(SUB_PATH)/kernels/internal/reference/portable_tensor_utils.cc \
	$(SUB_PATH)/kernels/internal/kernel_utils.cc \
	$(SUB_PATH)/kernels/internal/quantization_util.cc \
	$(SUB_PATH)/kernels/internal/tensor_utils.cc \
	$(SUB_PATH)/kernels/activations.cc \
	$(SUB_PATH)/kernels/add.cc \
	$(SUB_PATH)/kernels/basic_rnn.cc \
	$(SUB_PATH)/kernels/batch_to_space_nd.cc \
	$(SUB_PATH)/kernels/bidirectional_sequence_lstm.cc \
	$(SUB_PATH)/kernels/bidirectional_sequence_rnn.cc \
	$(SUB_PATH)/kernels/concatenation.cc \
	$(SUB_PATH)/kernels/conv.cc \
	$(SUB_PATH)/kernels/depthwise_conv.cc \
	$(SUB_PATH)/kernels/div.cc \
	$(SUB_PATH)/kernels/embedding_lookup.cc \
	$(SUB_PATH)/kernels/embedding_lookup_sparse.cc \
	$(SUB_PATH)/kernels/exp.cc \
	$(SUB_PATH)/kernels/fully_connected.cc \
	$(SUB_PATH)/kernels/gather.cc \
	$(SUB_PATH)/kernels/gemm_support.cc \
	$(SUB_PATH)/kernels/hashtable_lookup.cc \
	$(SUB_PATH)/kernels/kernel_util.cc \
	$(SUB_PATH)/kernels/l2norm.cc \
	$(SUB_PATH)/kernels/local_response_norm.cc \
	$(SUB_PATH)/kernels/lsh_projection.cc \
	$(SUB_PATH)/kernels/lstm.cc \
	$(SUB_PATH)/kernels/mean.cc \
	$(SUB_PATH)/kernels/mul.cc \
	$(SUB_PATH)/kernels/pad.cc \
	$(SUB_PATH)/kernels/pooling.cc \
	$(SUB_PATH)/kernels/register.cc \
	$(SUB_PATH)/kernels/reshape.cc \
	$(SUB_PATH)/kernels/resize_bilinear.cc \
	$(SUB_PATH)/kernels/skip_gram.cc \
	$(SUB_PATH)/kernels/space_to_batch_nd.cc \
	$(SUB_PATH)/kernels/space_to_depth.cc \
	$(SUB_PATH)/kernels/split.cc \
	$(SUB_PATH)/kernels/squeeze.cc \
	$(SUB_PATH)/kernels/strided_slice.cc \
	$(SUB_PATH)/kernels/sub.cc \
	$(SUB_PATH)/kernels/svdf.cc \
	$(SUB_PATH)/kernels/topk_v2.cc \
	$(SUB_PATH)/kernels/transpose.cc \
	$(SUB_PATH)/kernels/unidirectional_sequence_lstm.cc \
	$(SUB_PATH)/kernels/unidirectional_sequence_rnn.cc