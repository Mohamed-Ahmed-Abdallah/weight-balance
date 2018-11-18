#include <iostream>
#include <vector>

using namespace std;

bool isMeasurable(int target, vector<int> & weights)
{
	int Total_weight = 0;

	for (int i = 0; i < weights.size(); i++)
	{
		if (target == weights[i])
			return 1;
		Total_weight += weights[i];
	}

	if (target > Total_weight || weights.size() == 0)
		return 0;

	else if (target == Total_weight)
		return 1;

		vector<int> newWeights;
        for (int i = 1; i < weights.size(); i++)
		{
			newWeights.push_back(weights[i]);
		}
        return isMeasurable(target + weights[0], newWeights) || isMeasurable(target, newWeights);

	}


int main()
{
	int num;

	cout<<"This program is made by Karim Salah ElSayed"<<endl;
	cout<<"********************************************"<<endl<<endl;
	cout<<"We have weights 1,2,3 to balance with your weight"<<endl;
	cout<<"****************************************************"<<endl<<endl;

	for (int i=0;i<10;i++){

	cout<<"Please, Enter your Weight : ";
	cin>>num;
	cout<<endl;

	vector<int> Weights;

	Weights.push_back(1);
	Weights.push_back(2);
	Weights.push_back(3);

	cout << isMeasurable(num, Weights)<<endl<<endl;
	}

}
