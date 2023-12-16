#include "Checking.h"

bool Checking::nameCheck(string name) {
    int i = 0; bool f = 1;
	for (i = 0; i < name.length(); i++) {
		if ((name[i] >= 'A' && name[i] <= 'Z') || (name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'А' && name[i] <= 'Я') || (name[i] >= 'а' && name[i] <= 'я')) f = 1;
		else {
			f = 0;
			break;
		}
	}
	return f;
}
bool Checking::intCheck(string balance) {
    int i = 0; bool f = 1;
	for (i = 0; i < balance.length(); i++) {
		if (balance[i] >= '0' && balance[i] <= '9') f = 1;
		else {
			f = 0;
			break;
		}
	}
	return f;
}
bool Checking::boolCheck(string str) {
    bool f;
    f = !str.empty() && (str == "0" || str == "1");
    return f;
}