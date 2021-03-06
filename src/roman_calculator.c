#include "roman_converter.h"
#include "roman_calculator.h"
#include "roman_validator.h"

void add(const char *first_roman_string_input, const char *second_roman_string_input, char *roman_num, const int buffer_len) {

	if(roman_num) {
		roman_num[0] = '\0';

		if(is_valid_numeral(first_roman_string_input) && is_valid_numeral(second_roman_string_input)) {
			int sum = convert_to_arabic_num(first_roman_string_input) + convert_to_arabic_num(second_roman_string_input);

			convert_to_roman(sum, roman_num, buffer_len);
	    }
	}
}

void substract(const char *first_roman_string_input, const char *second_roman_string_input, char *roman_num, const int buffer_len) {

	if(roman_num) {
		roman_num[0] = '\0';

		if(is_valid_numeral(first_roman_string_input) && is_valid_numeral(second_roman_string_input)) {
			int diff = convert_to_arabic_num(first_roman_string_input) - convert_to_arabic_num(second_roman_string_input);

			convert_to_roman(diff, roman_num, buffer_len);
		}
	}
}