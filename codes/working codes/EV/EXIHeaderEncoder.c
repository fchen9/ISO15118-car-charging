/*
 * EXIHeaderEncoder.c
 *
 *  Created on: 03.01.2016
 *      Author: melanie
 */

# include "EXIHeaderEncoder.h"
# include "BitOutputStream.h"


#ifndef EXI_HEADER_ENCODER_C
#define EXI_HEADER_ENCODER_C


int writeEXIHeader(bitstream_t* stream) {
	/* init stream */
	stream->buffer = 0;
	stream->capacity = 8;

	return writeBits(stream, 8, 128);
}


#endif


