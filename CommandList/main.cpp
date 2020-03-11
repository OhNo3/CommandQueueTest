#include <vector>
#include <functional>
#include <iostream>

using namespace std;

int main(void)
{
	std::vector<std::function<void(void)>> command_list; //コマンドリストを模したもの

	command_list.push_back([] { cout << "GPU Set RTV- / 1" << endl; });
	cout << "CPU Set 命令- / 2" << endl;

	command_list.push_back([] { cout << "GPU Set RTV- / 3" << endl; });
	cout << "CPU Set 命令- / 4" << endl;

	command_list.push_back([] { cout << "GPU Set RTV- / 5" << endl; });
	cout << "CPU Set 命令- / 6" << endl;


	cout << endl;


	//コマンドキュー
	for (auto& cmd : command_list )
	{
		cmd();
	}

	getchar();
	return 0;
}