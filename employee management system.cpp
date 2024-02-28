// it is datastructure single linked list by using c++ language

#include<cstring>
#include <iostream>
#include <stdlib.h>
#include<cctype>
#include <limits>
using namespace std;


 struct employee {
     
     string name;  
	 string lname;                                 
     int id;                                                       
     string phonenumber;
     char address[20];      
     char email[20];                                
     char position[20];
     char Department[20];                               
     float Salary;                   
     char hiredate[20];
                                             
     struct employee*nxt;
 };
 
  void addend();//function add employees at the end
  void display();//function displays employees data
  void addfront();//function add employees at the front
  void addtotheright(int ID);//function add employees at the right of specific id
  void addtotheleft(int ID);//function add employees at the left of specific id
  void deleteend();//function delate employees at the end
  void deletefirst();//function delate employees at the front
  void update(int ID);//function to update employees data
  void deletesearch(int ID);//function delate employees data using id
  void sortById();//function sort employees data by id
  void sortBySalary();//function sort employees data by id
  void search_by_name();//function search employees data by name
  void search_by_salary();//function search employees data by salary
  void search_by_id();//function search employees data by id
  void sort();//function sort employees data by name
  struct employee*head=NULL;
int main()
{
    int number,option,ID;
    do
    {
 	again:
    	system("color 09");
    cout<<"     ========== SERVICE MENU ========== "<<endl;
    cout<<"     ====> what kind of service do you want   "<<endl;
    cout<<"     1 -> to add new employee data  "<<endl;
    cout<<"     2 -> to delete employee data "<<endl;
    cout<<"     3 -> to update specific employee data  "<<endl;
    cout<<"     4 -> to sort  employee  data  "<<endl;
    cout<<"     5 -> to search  employee  data  "<<endl;
    cout<<"     6 -> to display all employee data   "<<endl;
    cout<<"     0 -> to exit from the service  "<<" "<<endl;
    cout<<"enter your choice:";
    cin>>number;
	system("cls"); 
    switch(number){
       case 1:
       		do{
    	system("cls");
    	system("color 02");
       	cout << "   ==========Adding Employee =======" << endl;
        cout << "   =====>What type of adding do you want?====" << endl;
        cout<<"     1 -> to add in the front new employee data  "<<endl;
        cout<<"     2 -> to add at the end new employee data  "<<endl;
        cout<<"     3 -> to add new employee data to the right of specific employee data   "<<endl;
        cout<<"     4 -> to add new employee data to the left of specific employee data  "<<endl;
        cout<<"     5 -> to back to main menu"<<endl;
        cout<<"     0 -> to exit from the service  "<<" "<<endl;
        cout<<"enter your choice:";
        cin>>number;
		 if(number==1){
		 	system("cls");
		 	addfront();
		 }
		 else if(number==2){
		 	system("cls");
		 	addend();
		 }
		 else if(number==3){
	 	 system("cls");
         cout<<"enter the ID you want to add to its right "<<endl;
         cin>>ID;
         addtotheright(ID);
		 }
		 else if(number==4){
	     system("cls");
		 cout<<"enter the ID you want to add to its left "<<endl;
         cin>>ID;
         addtotheleft(ID);
          }
         else if(number==5){
		 system("cls");
         goto again;
          break;
          	}
        else if(number==0){
       	cout << "Exiting from the service. Thank you for using the employee management system!" << endl;
        exit(0); break;
        }
		 else{
		 cout<<"invalid option"<<endl;
       }
       cout<<"enter 1 to continue "<<endl;
       cout<<"enter 2 to main menu "<<endl;
       cin>>option;
	}while(option==1);
	system("cls");
	goto again;
		 break;
       case 2:
       	 do{
		 	   system("cls");
       		   system("color 06");
       	cout << "   ========= Deleting Employee =====" << endl;
        cout << "   =====What type of deleting do you want?" << endl;
       	cout<<"     1 -> to delete employee data at the first  "<<endl;
        cout<<"     2 -> to delete employee at the end  "<<endl; 
        cout<<"     3 -> to delete specific employee data  "<<endl;
        cout<<"     4 -> to back to main menu"<<endl;
        cout<<"     0 -> to exit from the service  "<<" "<<endl;
        cout<<"enter your choice:";
        cin>>number;
		if(number==1){
		 	system("cls");
		 	deletefirst();
		 }
		 else if(number==2){
		 	system("cls");
		 	deleteend();
		 }
		 else if(number==3){
		k: cout<<"enter the the employee id that you want to delete "<<endl;
         cin>>ID;
         if(cin.fail()){
    	cout<<"invalid id"<<endl;
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
    	goto k;
    	}
         system("cls");
         deletesearch(ID);
		 }
		 else if(number==4){
		  system("cls");
          goto again;
          break;
          	}
         else if(number==0){
       	 cout << "Exiting from the service. Thank you for using the employee management system!" << endl;
         exit(0); break;}
          else{
		 cout<<"invalid option"<<endl;
       }
       cout<<"enter 1 to continue "<<endl;
       cout<<"enter 2 to main menu "<<endl;
       cin>>option;
	}while(option==1);
	system("cls");
	goto again;
		 break;
       case 3:
        p: cout<<"enter the the employee id that you want to update "<<endl;
         cin>>ID;
         if(cin.fail()){
    	cout<<"invalid id"<<endl;
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
    	goto p;
    	}
         update(ID);
         break;
       case 4:
        do{
        	system("color 02");
       	cout << "   ========= sorting Employee =====" << endl;
        cout << "   =====What type of sorting do you want?" << endl;
		cout<<"     1 -> to sort employee data by name  "<<endl; 
		cout<<"     2 -> to sort employee data by ID"<<endl; 
		cout<<"     3 -> to sort employee data by salary  "<<endl; 
		cout<<"     4 -> to back to main menu"<<endl;
        cout<<"     0 -> to exit from the service  "<<" "<<endl;
         cout<<"enter your choice:";
         cin>>number;
          if (number == 1) {
            //char property[20];
            system("cls");
           sort();
           }
          else if(number==2){
          system("cls");
          sortById();}
          else if (number == 3){
          system("cls");
		  sortBySalary();}
		  else if(number==4){
		  system("cls");
          goto again;
          break;
          	}
         else if(number==0){
       	 cout << "Exiting from the service. Thank you for using the employee management system!" << endl;
         exit(0); break;}
          else{
		 cout<<"invalid option"<<endl;
   }
   cout<<"enter 1 to continue "<<endl;
       cout<<"enter 2 to main menu "<<endl;
       cin>>option;
	}while(option==1);
	system("cls");
	goto again;
		 break;
    case 5:
		 	do{
		 		system("cls");
		 		system("color 06");
       	cout << "   ========= searching Employee =====" << endl;
        cout << "   =====What type of searching do you want?" << endl;
		cout<<"     1 -> to search employee data by name  "<<endl; 
		cout<<"     2 -> to search employee data by ID"<<endl; 
		cout<<"     3 -> to search employee data by salary  "<<endl; 
		cout<<"     4 -> to back to main menu"<<endl;
        cout<<"     0 -> to exit from the service  "<<" "<<endl;
         cout<<"enter your choice:";
         cin>>number;
          if (number == 1) {
            	system("cls");
           search_by_name();
           }
          else if(number==2)
            search_by_id();
          else if (number == 3)
           search_by_salary();
		  else if(number==4){
		    system("cls");
          goto again;
          break;
          	}
         else if(number==0){
       	 cout << "Exiting from the service. Thank you for using the employee management system!" << endl;
         exit(0); break;}
         else{
		 cout<<"invalid option"<<endl;
       }
       cout<<"enter 1 to continue "<<endl;
       cout<<"enter 2 to main menu "<<endl;
       cin>>option;
	  }while(option==1);
    	system("cls");
	    goto again;
		 break;
        case 6:
		system("cls");
        system("color 0F");
		display(); break; 	
        case 0:
		cout << "Exiting from the service. Thank you for using the employee management system!" << endl;
		exit(0); break;
        default:
        cout<<"unknown input"<<endl;
        break;     
    }
       cout<<"enter 1 to continue "<<endl;
       cout<<"enter any key to stop the program "<<endl;
       cin>>option;
       system("cls");
    }while(option==1);
    
    return 0;
}
//to add at the end new employee data  
 void addend(){
    employee*temp= new employee ;
    cin.ignore();
    cout<<" enter employee first name => ";
    getline(cin,temp->name);
    cout<<" enter employee last name => ";
    getline(cin,temp->lname);
    p: cout << "enter employee id => ";
    cin >> temp->id;
    if(cin.fail()){
    	cout<<"invalid"<<endl;
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
    	goto p;
	}
    cout<<" enter employee phone number => ";
    cin>>temp->phonenumber;
    cout<<" enter employee address => ";
    cin>>temp->address;
    cout<<" enter employees email address => ";
    cin>>temp->email;
    cout<<" enter employees work position => ";
    cin>>temp->position;
    cout<<" enter employee`s department => ";
    cin>>temp->Department;
   a:cout<<" enter the salary of the employee =>  ";
    cin >> temp->Salary;
    if(cin.fail()){
    	cout<<"invalid"<<endl;
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
    	goto a;
	}
    cout<<" enter the hire date of the employee => in the form date/month/year => ";
    cin>> temp->hiredate;
    temp->nxt=NULL;
    
    if(head==NULL)
       head=temp;
    else
    {
     employee*temp2=head;
     while(temp2->nxt!=NULL)
     {
        temp2=temp2->nxt;
     }
      temp2->nxt=temp;
    }
     cout<<"       Employee data added successfully!"<<endl;
     cout<<endl;

}
 // to display all employee data 
 void display(){
     
      employee*temp3;
      temp3=head;
      if(temp3==NULL)
       cout<<" there is no data inside"<<endl;
       else if(temp3->nxt==NULL){
             cin.ignore();
             cout << "     ========Displaying Employee Data=====" << endl;
             cout << "     ===>Here are all the employees currently in the system:" << endl;
             cout<<" employee first name => "<<temp3->name<<endl;
             cout<<" employee last name => "<<temp3->lname<<endl;
             cout<<" employee id => "<<temp3->id<<endl;
             cout<<" employee phonenumber => "<<temp3->phonenumber<<endl;
             cout<<" employee address => "<<temp3->address<<endl;
             cout<<" employee email => "<<temp3->email<<endl;  
             cout<<" employee work position => "<<temp3->position<<endl; 
             cout<<" employee Department => "<<temp3->Department<<endl;
             cout<<" employee salary => "<<temp3->Salary<<endl;
             cout<<" employee hiredate => "<<temp3->hiredate<<endl;
             cout<<endl;
       }
       else{
          
           while(temp3 != NULL)
           { 
             cout<<" employee first name => "<<temp3->name<<endl;
             cout<<" employee last name => "<<temp3->lname<<endl;
             cout<<" employee id => "<<temp3->id<<endl;
             cout<<" employee phonenumber => "<<temp3->phonenumber<<endl;
             cout<<" employee address => "<<temp3->address<<endl;
             cout<<" employee email => "<<temp3->email<<endl;  
             cout<<" employee work position => "<<temp3->position<<endl;
             cout<<" employee Department => "<<temp3->Department<<endl;
             cout<<" employee salary => "<<temp3->Salary<<endl;
             cout<<" employee hiredate => "<<temp3->hiredate<<endl; 
             cout<<endl;
             
            temp3=temp3->nxt;
       }

 }
    cout<<endl;
 }
 // to add at the end new employee data 
  void addfront(){  
    employee*temp= new employee ;
    cin.ignore();
    cout<<" enter employee first name => ";
    getline(cin,temp->name);
    cout<<" enter employee last name => ";
    getline(cin,temp->lname);
 p: cout << "enter employee id => ";
    cin >> temp->id;
    if(cin.fail()){
    	cout<<"invalid"<<endl;
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
    	goto p;
	}
    cout<<" enter employee phone number => ";
    cin>>temp->phonenumber;
    cout<<" enter employee address => ";
    cin>>temp->address;
    cout<<" enter employees email address => ";
    cin>>temp->email;
    cout<<" enter employees work position => ";
    cin>>temp->position;
    cout<<" enter employees department => ";
    cin>>temp->Department;
   a: cout<<" enter the salary of the employee =>  ";
    cin>>temp->Salary;
     if(cin.fail()){
    	cout<<"invalid"<<endl;
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
    	goto a;
	}
    cout<<" enter the hire date of the employee => in the form date/month/year => ";
    cin>> temp->hiredate;
       temp->nxt=NULL;
       if(head==NULL)
        head=temp;
        else
        {
         temp->nxt=head;
         head=temp;
        } 
         cout<<"       Employee data added successfully!"<<endl;
         cout<<endl;
   } 
     // to update specific employee data
  void update(int ID){
       employee* temp = head;
       bool found = false;
       while (temp != NULL) {
        if (temp->id == ID) {
            found = true;
            break;
        }
        temp = temp->nxt;
    } 
    if (found) {  
    cin.ignore();
    cout<<" enter employee first name => ";
    getline(cin,temp->name);
    cout<<" enter employee last name => ";
    getline(cin,temp->lname);
 p: cout << "enter employee id => ";
    cin >> temp->id;
    if(cin.fail()){
    	cout<<"invalid"<<endl;
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
    	goto p;
	}
    cout<<" enter employee phone number => ";
    cin>>temp->phonenumber;
    cout<<" enter employee address => ";
    cin>>temp->address;
    cout<<" enter employees email address => ";
    cin>>temp->email;
    cout<<" enter employees work position => ";
    cin>>temp->position;
    cout<<" enter employees department => ";
    cin>>temp->Department;
 a: cout<<" enter the salary of the employee =>  ";
    cin>>temp->Salary;
     if(cin.fail()){
    	cout<<"invalid"<<endl;
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
    	goto a;
	}
    cout<<" enter the hire date of the employee => in the form date/month/year => ";
    cin>> temp->hiredate;
    cout<<endl;   
        cout << "Employee data updated successfully!" << endl;
    } else {
        cout << "Employee with ID " << ID << " not found." << endl;
    }
     cout<<endl;
}
//to add in the front new employee data 
void addtotheright(int ID) {
    employee *temp = head;
    while (temp != NULL) {
        if (temp->id == ID) {
            employee *temp2 = new employee;
            cin.ignore();
            cout << "Enter employee first name => ";
            cin >> temp2->name;
            cin.ignore();
            cout<<" enter employee last name => ";
             getline(cin,temp2->lname);
         p: cout << "enter employee id => ";
        cin >> temp2->id;
        if(cin.fail()){
    	cout<<"invalid"<<endl;
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
    	goto p;
	}
            cout << "Enter employee phone number => ";
            cin >>temp2->phonenumber;
            cout << "Enter employee address => ";
            cin >>temp2->address;
            cout << "Enter employee's email address => ";
            cin >> temp2->email;
            cout << "Enter employee's work position => ";
            cin >> temp2->position;
            cout << "Enter employee's department => ";
            cin >> temp2->Department;
             a:cout<<" enter the salary of the employee =>  ";
    cin >> temp->Salary;
    if(cin.fail()){
    	cout<<"invalid"<<endl;
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
    	goto a;
	}
            cout << "Enter the hire date of the employee => in the form date/month/year => ";
            cin >> temp2->hiredate;
            temp2->nxt = temp->nxt;
            temp->nxt = temp2;
            break;
        }
        temp = temp->nxt;
    }
     cout<<endl;
 }
 
 // to add new employee data to the left of specific employee data 
   void addtotheleft(int ID) {
    employee *temp = head;
    if (temp->id == ID) {
    	cin.ignore();
        employee *temp2 = new employee;
            cout<<" enter employee first name => ";
            getline(cin,temp2->name);
            cout<<" enter employee last name => ";
            getline(cin,temp2->lname);
         p: cout << "enter employee id => ";
        cin >> temp2->id;
        if(cin.fail()){
    	cout<<"invalid"<<endl;
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
    	goto p;
	}
            cout << "Enter employee phone number => ";
            cin >>temp2->phonenumber;
            cout << "Enter employee address => ";
            cin >>temp2->address;
            cout << "Enter employee's email address => ";
            cin >> temp2->email;
            cout << "Enter employee's work position => ";
            cin >> temp2->position;
            cout << "Enter employee's department => ";
            cin >> temp2->Department;
             a:cout<<" enter the salary of the employee =>  ";
             cin >> temp->Salary;
            if(cin.fail()){
         	cout<<"invalid"<<endl;
         	cin.clear();
    	   cin.ignore(numeric_limits<streamsize>::max(),'\n');
        	goto a;
	}
            cout << "Enter the hire date of the employee => in the form date/month/year => ";
            cin >> temp2->hiredate;
         temp2->nxt = temp;
          head =temp2;
    } else {
        while (temp->nxt != NULL) {
            if (temp->nxt->id == ID) {
              employee *temp2 = new employee;
             cin.ignore();
             cout<<" enter employee first name => ";
             getline(cin,temp2->name);
             cout<<" enter employee last name => ";
             getline(cin,temp2->lname);
          y: cout << "enter employee id => ";
        cin >> temp2->id;
        if(cin.fail()){
    	cout<<"invalid"<<endl;
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(),'\n');
    	goto y;
	}
            cout << "Enter employee phone number => ";
            cin >>temp2->phonenumber;
            cout << "Enter employee address => ";
            cin >>temp2->address;
            cout << "Enter employee's email address => ";
            cin >> temp2->email;
            cout << "Enter employee's work position => ";
            cin >> temp2->position;
            cout << "Enter employee's department => ";
            cin >> temp2->Department;
           z:cout<<" enter the salary of the employee =>  ";
            cin >> temp->Salary;
             if(cin.fail()){
            cout<<"invalid"<<endl;
         	cin.clear();
        	cin.ignore(numeric_limits<streamsize>::max(),'\n');
        	goto z;
	    }
            cout << "Enter the hire date of the employee => in the form date/month/year => ";
            cin >> temp2->hiredate;
                temp2->nxt = temp->nxt;
                temp->nxt = temp2;
                break;
            }
            temp = temp->nxt;
        }
    }
    cout<<"       Employee data added successfully!"<<endl;
    cout<<endl;
}
//to delete specific employee data 
void deletesearch(int ID){
    employee *temp, *temp2;
    temp = head;
    temp2 = NULL;
    while(temp != NULL && temp->id != ID){
        temp2 = temp;
        temp = temp->nxt;
    }
    if(temp == NULL){
        cout<<"Employee with ID "<<ID<<" not found."<<endl;
        return;
    }
    if(temp2 == NULL)
        head = temp->nxt;
    else
        temp2->nxt = temp->nxt;
    delete temp;
    cout<<"deleted successfully!"<<endl;
}
//to delete employee data at the first 
void deletefirst() {
        if(head==NULL)
         cout<<"There is no an employee data to be delated! "<<endl;
         else
         {
          employee*temp=head;
          head=head->nxt;
          delete temp;
         cout<<"deleted successfully!"<<endl;
         }
          cout<<endl;
    }
    //to delete employee at the end
     void deleteend(){
         if(head==NULL)
          cout<<"There is no an employee data to be delated!"<<endl;
          else
          {
           employee*temp;
           temp = head;
           employee*temp2;
           while(temp->nxt != NULL)
           {
               temp2=temp;
               temp=temp->nxt;
           }
           temp2->nxt=NULL;
           delete temp;
           cout<<"deleted successfully!"<<endl;
          }
           cout<<endl;
  } 
  // Function to sort the employees by first name;
void sort() {     
  employee* current = head;
    employee* temp;
     if(head==0)
        cout<<"No employee data to be sorted"<<endl;
        else{
    while (current != NULL)
    {   temp = current->nxt;
        while (temp != NULL)
        {   if (temp->name < current->name)
            {   swap(temp->phonenumber, current->phonenumber);
                swap(temp->lname, current->lname);
                swap(temp->name, current->name);
                swap(temp->address, current->address);
                swap(temp->email, current->email);
                swap(temp->Salary, current->Salary);
                swap(temp->id, current->id);
                swap(temp->position, current->position);
                swap(temp->Department, current->Department);
                swap(temp->hiredate, current->hiredate);
            }
            temp = temp->nxt;
        }
        current = current->nxt;
    }
    cout << "employees have been sorted by name!" << endl;
}}
  // Function to sort the employees by id
  void sortById(){
  employee* current = head;
    employee* temp;
     if(head==0)
        cout<<"No employee data to be sorted"<<endl;
        else{
    while (current != NULL)
    {   temp = current->nxt;
        while (temp != NULL)
        {   if (temp->id < current->id)
            {   swap(temp->phonenumber, current->phonenumber);
             swap(temp->lname, current->lname);
                swap(temp->name, current->name);
                swap(temp->address, current->address);
                swap(temp->email, current->email);
                swap(temp->Salary, current->Salary);
                swap(temp->id, current->id);
                swap(temp->position, current->position);
                swap(temp->Department, current->Department);
                swap(temp->hiredate, current->hiredate);
            }
            temp = temp->nxt;
        }
        current = current->nxt;
    }
    cout << "employees have been sorted by ID." << endl;
}}
  // Function to sort the employees by salary
	void sortBySalary()
{   employee* current = head;
    employee* temp;
     if(head==0)
        cout<<"No employee data to be sorted"<<endl;
        else{
    while (current != NULL)
    {   temp = current->nxt;
        while (temp != NULL)
        {   if (temp->Salary < current->Salary)
            {   swap(temp->phonenumber, current->phonenumber);
                swap(temp->name, current->name);
                swap(temp->lname, current->lname);
                swap(temp->address, current->address);
                swap(temp->email, current->email);
                swap(temp->Salary, current->Salary);
                swap(temp->id, current->id);
                swap(temp->position, current->position);
                swap(temp->Department, current->Department);
                swap(temp->hiredate, current->hiredate);
            }
            temp = temp->nxt;
        }
        current = current->nxt;
    }
    cout << "employees have been sorted by salary." << endl;
}}
void search_by_name()// this enable the user of this system to search employees by their name
 {
     struct employee *ptr=head;
     string nam;
     cout<<"enter name to search by name"<<endl;
     cin>>nam;
      if(head==NULL)
     cout<<"there is nothing to search"<<endl;
     else{
	 
     while(1)
     {
         if((ptr->name)==nam)
         {
                cout << "Employee Name: " << ptr->name << endl;
                 cout << "Employee last Name: " << ptr->lname << endl;
                cout << "Employee ID: " << ptr->id << endl;
                cout << "Employee Phone Number: " << ptr->phonenumber << endl;
                cout << "Employee Address: " << ptr->address << endl;
                cout << "Employee Email: " << ptr->email << endl;
                cout << "Employee Position: " << ptr->position << endl;
                cout << "Employee Department: " << ptr->Department << endl;
                cout << "Employee Salary: " << ptr->Salary << endl;
                cout << "Employee Hire Date: " << ptr->hiredate << endl;
                break;
         }
         else if(ptr->nxt==NULL)
         {
         	cout<<"name doesnt not match"<<endl;
         	break;
		 }
		 else
		 ptr=ptr->nxt;
     }
}
 }
  void search_by_id()// this enable the user of this system to search employees by their id
{
    struct employee *ptr=head;
     int id_no;
     cout<<"enter id number to search by id number"<<endl;
     cin>>id_no;
    if(head==NULL)
     cout<<"there is nothing to search"<<endl;
     else{
     while(1)
     {
         if((ptr->id)==id_no)
         {

                cout << "Employee Name: " << ptr->name << endl;
                cout << "Employee last Name: " << ptr->lname << endl;
                cout << "Employee ID: " << ptr->id << endl;
                cout << "Employee Phone Number: " << ptr->phonenumber << endl;
                cout << "Employee Address: " << ptr->address << endl;
                cout << "Employee Email: " << ptr->email << endl;
                cout << "Employee Position: " << ptr->position << endl;
                cout << "Employee Department: " << ptr->Department << endl;
                cout << "Employee Salary: " << ptr->Salary << endl;
                cout << "Employee Hire Date: " << ptr->hiredate << endl;
                break;
         }
        else if(ptr->nxt==NULL)
         {
         	cout<<"name doesnt not match"<<endl;
         	break;
		 }
		 else
		 ptr=ptr->nxt;
     }

}
}
void search_by_salary()// this enable the user of this system to search employees by their salary
{
     struct employee *ptr=head;
     float sa;
     cout<<"enter the amount of salary to search by salary"<<endl;
     cin>>sa;
     if(head==NULL)
     cout<<"there is nothing to search"<<endl;
     else{
	 while(1)
     {
         if((ptr->Salary)==sa)
         {
                cout << "Employee Name: " << ptr->name << endl;
                cout << "Employee last Name: " << ptr->lname << endl;
                cout << "Employee ID: " << ptr->id << endl;
                cout << "Employee Phone Number: " << ptr->phonenumber << endl;
                cout << "Employee Address: " << ptr->address << endl;
                cout << "Employee Email: " << ptr->email << endl;
                cout << "Employee Position: " << ptr->position << endl;
                cout << "Employee Department: " << ptr->Department << endl;
                cout << "Employee Salary: " << ptr->Salary << endl;
                cout << "Employee Hire Date: " << ptr->hiredate << endl;
                break;
         } 
		  else if(ptr->nxt==NULL)
         {
         	cout<<"salary doesnt not match!"<<endl;
         	break;
		 }
		 else
		 ptr=ptr->nxt;
}
}
}