#include <iostream>
#include <fstream>
int main()
{
	std::ofstream fout("log.txt");
	if (!fout)
	{
		std::cout << "파일 열기 실패\n";
		return 1;
	}
	fout << "Hello\n";
	fout << "C++ File IO\n";
}
