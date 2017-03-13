# include <iostream>

using namespace std;

int MAXPET=50;

typedef struct{
	char atype[10];
	int tag;
	float age;
	char sold;
	char color[10];
	void new_details(int x){
				cout << "Enter pet_type :" << endl;
				cin >> atype;
				cout << "Enter pet age :" <<endl;
				cin >> age;
				sold = 'N';
				tag=x;
				cout << "Enter pet color :" << endl;
				cin >> color;
		};
		void set_status(){
			sold='Y';
		}
}pet_reg;

void findpet(pet_reg *, int, int);

int main()
{
	// Declare a pointer to a variable
	pet_reg *p(nullptr);
	int n, tag;
	char domore;

	cout << " Enter the number of pets in registory (n):"<<endl;
	cin >> n;

	// Allocate space

	p = new pet_reg[n];

	// Read in values
	cout << " Enter Details as propmted:"<< endl;
	for (int j=0; j<n;j++)
	{
		cout << "Assigned Pet_Tag: " << j+1 << endl;
		(p+j)->new_details(j+1);
	}

	//Finding a pet
	do{
			cout << "+++++++++++FIND YOUR PET+++++++++"<<endl;
			cout<< endl;
			cout << " Enter Pet_Tag :" <<endl;
			cin >> tag;
			findpet(p, tag-1, n);
			cout << endl;
			cout << " Do you want to continue searching (y/n): ";
			cin >> domore;
		}while(domore == 'y'|| domore=='Y');
	
	cout <<endl;
	delete(p);

	return 0;
}

void findpet(pet_reg * f, int i, int n)
{
	if (i>n || i<0) cout << "Record not found "<<endl;
	else
	{
		cout <<"Pet Type: "<<(f+i)->atype<<endl;
		cout <<"age: "<<(f+i)->age<<endl;
  	cout <<"status: "<<(f+i)->sold<<endl;
	}
	cout << endl;
}
