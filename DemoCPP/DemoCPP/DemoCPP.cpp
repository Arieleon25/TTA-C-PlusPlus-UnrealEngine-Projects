//#include <vector>
//#include <algorithm>
//#include "HeaderFunctions.h"
//using namespace std;

#include <iostream>
#include "Account.h"

int main()
{
	Account a1;
	a1.Deposit(90);
	cout << "After depositing $90 " << "Balance is " << a1.GetBalance() << endl;

	for (auto s : a1.Report())
	{
		cout << s << endl;
	}

	a1.Withdraw(50);
	if (a1.Withdraw(100))
	{
		cout << "seconds withdraw succeeds" << endl;
	}

	cout << "After withdrawing $50 then $100" << endl;
	for (auto s : a1.Report())
	{
		cout << s << endl;
	}
	return 0;


}

//cout << 30 << '\n';
   //cout << "Lets use some variables" << '\n';

   //int i = 2 + 2;

   //i = i - 1;
   //cout << i * 2 << '\n';

   //int j;

   //cin >> j;

   //if (j < 100)
   //{
   //    cout << "is less than a 100 \n";
   //}
   //else
   //{
   //    cout << "is more than a 100 \n";
   //}

   //while (j >= 100)
   //{
   //    cout << j * 20 << endl;
   //}

   //for (int x = 0; x < 6; x++)
   //{
   //    cout << j + 5 << endl;
   //}

   //int answer = 8;
   //int res;
   //bool loopstop = true;

   //while (loopstop)
   //{
   //    cout << "Guss the number" << endl;
   //    cin >> res;
   //    
   //    if (res == 7)
   //    {
   //        cout << "Correct" << endl;
   //        loopstop = false; 
   //    }

   //    else if (res < 7)
   //    {
   //        cout << "too low" << endl;
   //    }
   //    else
   //    {
   //        cout << "too high" << endl;
   //    }
   //}
   //return 0;

   //cout << add(5, 6);

   //string name;
   //cout << "who are you? \n";
   //cin >> name;
   //string greeting = "Hello, " + name;
   //if (name == "Arie")
   //{
   //    greeting += ", I know you!";
   //}
   //cout << greeting << endl;

   //int l = greeting.length();
   //cout << "\"" + greeting + "\" is " << l << " character long." << '\n';
   //string beginning = greeting.substr(greeting.find(' ') + 1);
   //cout << beginning << endl;
   //
   //if (beginning == name)
   //{
   //    cout << "expected result." << endl;
   //}
   //return 0;

   //vector<int> nums;

   //for (int i = 0; i < 10; i++)
   //{
   //    nums.push_back(i);
   //}

   //for (auto item : nums)
   //{
   //    cout << item << " ";
   //}
   //cout << endl;

   //vector<string> words;

   //cout << "enter three words ";
   //
   //for (int i = 0; i < 3; i++)
   //{
   //    string s;
   //    cin >> s;
   //    words.push_back(s);
   //}

   //for (auto item : words)
   //{
   //    cout << item << " ";
   //}
   //cout << endl;

   //cout << "int vector nums has " << nums.size() << " elements." << endl;

   //nums[5] = 3;
   //nums[6] = -1;
   //nums[1] = 99;

   //for (auto item : nums)
   //{
   //    cout << item << " ";
   //}
   //cout << endl;

   //for (unsigned int i = 0; i < nums.size(); i++)
   //{
   //    cout << nums[i] << " ";
   //}
   //cout << endl;

   //for (auto i = begin(nums); i != end(nums); i++)
   //{
   //    cout << *i << " ";
   //}

   //sort(begin(words), end(words));
   //for (auto item : words)
   //{
   //    cout << item << " ";
   //}
   //cout << endl;

   //int threes = count(begin(nums), end(nums), 3);
   //cout << "Vector of ints has " << threes << " elements with value 3" << endl;

   //int tees = count(begin(words[0]), end(words[0]), 't');
   //cout << "first word has " << tees << " letter t's" << endl;

   //return 0;