class Solution {
public:
    int romanToInt(string s) {
	int sum = 0;
	bool is_prev_X = false;
	bool is_prev_V = false;
	bool is_prev_C = false;
	bool is_prev_M = false;
	bool is_prev_D = false;
	bool is_prev_L = false;
	for (auto it = s.rbegin(); it != s.rend(); it++) {
		int r2i = 0;
		
		switch (*it) {
		case 'I':
			r2i = (is_prev_X || is_prev_V) ? -1 : 1;
			is_prev_V = is_prev_X = false;
			break;
		case 'V':
			r2i = 5;
			is_prev_V = true;
			break;
		case 'X':
			r2i = (is_prev_C || is_prev_L) ? -10 : 10;
			is_prev_X = true;
			is_prev_L = is_prev_C = false;
			break;
		case 'L':
			r2i = 50;
			is_prev_L = true;
			break;
		case 'C':
			r2i = (is_prev_M || is_prev_D) ? -100 : 100;
			is_prev_C = true;
			is_prev_D = is_prev_M = false;
			break;
		case 'D':
			r2i = 500;
			is_prev_D = true;
			break;
		case 'M':
			r2i = 1000;
			is_prev_M = true;
			break;
		default:
			r2i = 0;
		}

		sum += r2i;
	}

	return sum;
}

};