#include <vector>
#include <functional>
#include <iostream>

using namespace std;

int main(void)
{
	std::vector<std::function<void(void)>> command_list; //�R�}���h���X�g��͂�������

	command_list.push_back([] { cout << "GPU Set RTV- / 1" << endl; });
	cout << "CPU Set ����- / 2" << endl;

	command_list.push_back([] { cout << "GPU Set RTV- / 3" << endl; });
	cout << "CPU Set ����- / 4" << endl;

	command_list.push_back([] { cout << "GPU Set RTV- / 5" << endl; });
	cout << "CPU Set ����- / 6" << endl;


	cout << endl;


	//�R�}���h�L���[
	for (auto& cmd : command_list )
	{
		cmd();
	}

	getchar();
	return 0;
}