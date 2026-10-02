#include<vector>

std::vector<int> input();
int add(){
	std::vector<int> sum{input()};

	int ans = 0;
	for(int i: sum){
		ans+=i;
	}

	return  ans;
}
