#include <iostream>
#include <map>
#include <filesystem>
#include <algorithm>
#include <Windows.h>
#include "FileSystems.cpp"
#include <fstream>

#pragma warning(disable : 4996);

namespace SetTitle {

	static std::string SetTitle(std::string titleValue) {

		std::transform(titleValue.begin(), titleValue.end(), titleValue.begin(), ::toupper);
		return titleValue;
	}

}

namespace Convert {

	float seconds;
	float hours;

	static std::map<std::string, std::string> GetUI(std::string lines) {

		std::map<std::string, std::string> linesWritten;

		for (int i = 2; i < 20 / 2; i++) {

			linesWritten.insert({ "", lines });
		}

		return linesWritten;
	}
}

class Title {

public:

	static std::string getTitle(std::string title) {


		return title;
	}

};

class TimerStart {

public:

	static int initialized(int startedIndex) {

		startedIndex = -1;
		return startedIndex + 1;
	}

	static void getLoopedUI(int index) {

		if (initialized(0) > -1) {

			Sleep(1 * 600);
		}
	}
};

class FileCreated {

public:

	inline bool files(std::string createdFileAt) {

		DateNow dateNow;
		if (std::filesystem::exists(createdFileAt)) {

			std::filesystem::path p(createdFileAt);

			std::cout << p.filename() << "Was Created" << std::endl;

			std::ofstream fileCreated(p.filename());
			fileCreated << dateNow.getDateNow();

			return true;
		}

		return false;
	}
};

static std::string AppendMessageEnded(std::string message) {

	return message.append("DONE");
}

const float LINES_SIZE = 20.0f * 2.0f;

int main() {

	std::string linesGet = "-";
	std::map<std::string, std::string> lines = Convert::GetUI(linesGet);

	for (auto& line : lines) {
		for (int i = 0; i < LINES_SIZE; i++) {

			std::cout << line.second;
		}
	}

	std::cout << std::endl;

	std::cout << SetTitle::SetTitle(Title::getTitle("Pom Timer")) << std::endl;

	std::cout << std::endl;
	int i = 1;

	
	while (i >= 0) {

		i += 1;

		if (i == 25 * 60) {

			std::cout << AppendMessageEnded("Done") << std::endl;
			Sleep(2 * 1000);
			break;
		}


		else {

			TimerStart startingTimer;
			startingTimer.getLoopedUI(i);
			FileCreated files;

			files.files("datenow.txt");
		}
	}

	for (auto& line : lines) {
		for (int i = 0; i < LINES_SIZE; i++) {
			std::cout << line.second;
		}
	}

	std::cout << std::endl;

	system("pause > 0");
	return 0;
}