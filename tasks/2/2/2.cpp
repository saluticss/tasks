

#include <iostream>
#include <vector>

using namespace std;

vector<int> get_new_sequence(vector<int> v) {
	vector<int> n_v;
	for (size_t i = 0; i < v.size(); i++){
		if (std::find(n_v.begin(), n_v.end(), v[i]) == n_v.end()) {
			n_v.push_back(v[i]);
		}
	}

	return n_v;
}

void print_vector(vector<int> v) {

	for (size_t i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

int main()
{
    vector<int> v;
	for (size_t i = 0; i < 10; i++){
		v.push_back(rand() % 5);
	}
	print_vector(v);

	v = get_new_sequence(v);
	print_vector(v);
}

