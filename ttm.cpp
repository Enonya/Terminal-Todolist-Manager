
// author : black_trees

#include "include/std.hpp"
#include "include/all.hpp"

namespace info {

#ifdef __linux__
	#include <system>
	void clear() {
		system("clear");
	}
#else
	#include <windows.h>
	void clear() {
		system("cls");
	}
#endif

	void command_format() {
		cout << "Format: ttm [SAVEFILE]"<< endl;
	}

	void error_save(char file[]) {
		string f = file;
		cout << "[Error]: Cannot save file \"" << f << "\"!" << endl;
	}
	void error_read_save(char file[]) {
		string f = file;
		cout << "[Error]: Cannot read save file \"" << f << "\"!" << endl;
	}

	void read_file(char file[]) {
		string f = file;
	}
}

namespace save {
	string file_name;
}

int main(int argc, char *argv[]) {
	if(argc > 2) return info::command_format(), 0;
	save::file_name = argv[1];

	return 0;
}
