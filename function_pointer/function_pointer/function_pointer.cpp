// function_pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;


void progress(int current, int total) {
	cout << "current: " << current << " total: " << total << endl;
}

void progressFile(int current, int total) {
	cout << "File current: " << current << " total: " << total << endl;
}

/*
void uploadWithProgress(int* data, int size, void(*progressFunc)(int, int)) {
	for (int i = 0; i < 5; i++) {
		this_thread::sleep_for(std::chrono::seconds(1));
		(*progressFunc)(size / 5 * i, size);
	}
}


typedef void(*progressFunc)(int, int);
void uploadWithProgress(int* data, int size, progressFunc p) {
	for (int i = 0; i < 5; i++) {
		this_thread::sleep_for(std::chrono::seconds(1));
		p(size / 5 * i, size);
	}
}

int main()
{
	int* data = 0;
	uploadWithProgress(data, 500, progressFile);

	auto lamdba = [](int current, int total)->void {
		cout << "current: " << current << " total: " << total << endl;
	};

	uploadWithProgress(data, 500, lamdba);
	bool toFile = true;
	progressFunc f;

	if (toFile) {
		f = &progressFile;
	}
	else {
		f = &progress;
	}

    return 0;
}
*/

class ProgressFilePrinter {
public:
	void operator()(int current, int total) {
		cout << "Upload " << current << " total: " << total;
	}
};

template <typename T>
void uploadWithProgress(int* data, int size, T p) {
	for (int i = 0; i < 5; i++) {
		this_thread::sleep_for(std::chrono::seconds(1));
		p(size / 5 * i, size);
	}
}

int main() {
	int* data = 0;
	uploadWithProgress(data, 500, ProgressFilePrinter());

	return 0;
}