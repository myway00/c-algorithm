//원하는 값만 1로 지정해주기
#include <stdio.h>
unsigned char SetBit(unsigned char dest_data, unsigned char bit_num) {
	//1바이트 변수라 비트이동은 0~7 까지만 가능
	if (bit_num < 8) dest_data = dest_data | (0x01 << bit_num);
	return dest_data;
}
void main() {
	unsigned char lamp_state = 0x77;
	printf("%X ->  ", lamp_state);
	lamp_state = SetBit(lamp_state, 3);
	printf("%X\n", lamp_state);
}
