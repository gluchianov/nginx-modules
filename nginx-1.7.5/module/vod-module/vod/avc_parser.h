#ifndef __AVC_PARSER_H__
#define __AVC_PARSER_H__

// includes
#include "common.h"

// functions
vod_status_t avc_parser_parse_extra_data(
	void* ctx,
	vod_str_t* extra_data,
	uint32_t* nal_packet_size_length,
	uint32_t* min_packet_size);

vod_status_t avc_parser_get_slice_header_size(
	void* ctx,
	const u_char* buffer,
	uint32_t size,
	uint32_t* result);

vod_status_t avc_parser_is_slice(
	void* ctx,
	uint8_t nal_type,
	bool_t* is_slice);

#endif // __AVC_PARSER_H__
