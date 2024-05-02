#include <iostream>
#include <string>
using namespace std;
class Car 
{
	private:
	string model;
	public:
		Car(const string& m) 
		{
			model = m;
			cout << "A car of model " << model << " is manufactured." << endl;
		}
		void displayModel() 
		{
			cout << "Model: " << model << endl;
		}
		void setModel(const string& m) 
		{
			this->model = m;
		}

		~Car() 
		{
			cout << "The car of model " << model << " is sold." << endl;
		}
};

int main() 
{
	string initialModel;
	cout << "Enter the initial model of the car: ";
	getline(cin, initialModel);


	Car* car1 = new Car(initialModel);
	car1->displayModel();
	string updatedModel;
	cout << "Enter the updated model of the car: ";
	cin>> updatedModel;
	car1->setModel(updatedModel);

	car1->displayModel();
	delete car1;
return 0;

}