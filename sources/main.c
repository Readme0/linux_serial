/*
 * main.c
 *
 *  Created on: Oct 12, 2016
 *      Author: wangbo
 */
#include <stdio.h>
#include "digitalradio.h"


int main()
{
	static unsigned char send_buf[]="wangbo";
	radio_uart_init(UART_RADIO);

	send_radio_data(send_buf, sizeof(send_buf));
	getchar();

	return 0;
}

