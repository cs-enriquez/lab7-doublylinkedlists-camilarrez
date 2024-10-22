	#include "StudentList.h"

	// Define a constructor to initialize the list. The list starts with no Students
    StudentList::StudentList() {
		head = nullptr;
		tail = nullptr;
		numStudents = 0;
	}

	// return the number of students currently in the list
	int StudentList::listSize() {
		return numStudents;
	}

	//add a Node with a student to the front (head) of the list.
	void StudentList::addFront(Student s) {
		Node *newStudent = new Node(s);
		//If list is empty
		if(head == nullptr){
			head = newStudent; //point both to new node
			tail = newStudent;
		}else{
			newStudent->next = head; // Node's nest is head node
			head->prev = newStudent; // Node's previous is new node
			head = newStudent; //new node is now new head
		}
		numStudents++;
	}


	//add a Node with a student to the back (tail) of the list.
	void StudentList::addBack(Student s) {
		Node *newStudent =  new Node(s);
		//if list is empty
		if(tail ==  nullptr){ 
			head = newStudent;
			tail = newStudent;
		}else{
		newStudent->prev = tail;
		tail-> next =  newStudent;
		tail = newStudent; //new node is now tail
		}
		numStudents++;
	}

	//Print out the names of each student in the list.
	void StudentList::printList() {
		Node *current = head; //current node will start at head node
		while(current != nullptr){//while current node is not empty
			cout << current->data.name << endl; //access student data from Node class and then access name from student class
			current = current -> next; //moves current node to next node 
		}
	}

	// Remove the Node with the student at the back (tail) of the list
	// should not fail if list is empty! Print an error message if this occurs
	// Don't forget that your head and tail pointers will be null pointers if the list is empty
	void StudentList::popBack() {
		if(tail == nullptr){
			cout << "List is empty" << endl;
			return;
	}if(tail == head){ // there is only one element in list
		head = nullptr;
		tail = nullptr;
	}
	
	else{
		Node *temp = tail;//point new node to tail
		tail = tail->prev; //Set prev node to new tail
		tail-> next = nullptr;// point new tail's next node to null
		temp = nullptr;
		delete temp;//delete temp with old tail

	}
	}

	// Remove the Node with the student at the front (head) of the list
	// should not fail if list is empty! Print an error message if this occurs
	// Don't forget that your head and tail pointers will be null pointers if the list is empty
	void StudentList::popFront() {
		
	}

	//insert a student at the position "index".
	// for this list, count head as index 0
	// if index is outside of current list range, 
	// print a message and insert the student at the back of the list
	// the previous Node at your target index should be moved forward. "For exampe, Node with student at index i, becomes index i+1" 
	// Remember that you already have methods that can add students to the front or back of list if needed! Don't repeat this code.
	void StudentList::insertStudent(Student s, int index) {}

	//find the student with the given id number and return them
	// if no student matches, print a message 
	// and create and return a dummy student object
	Student StudentList::retrieveStudent(int idNum) {
		Student fixthis;
		return fixthis;
	}

	// Remove a Node with a student from the list with a given id number
	// If no student matches, print a message and do nothing
	void StudentList::removeStudentById(int idNum) {}

	//Change the gpa of the student with given id number to newGPA
	void StudentList::updateGPA(int idNum, float newGPA) {}

	//Add all students from otherList to this list.
	//otherlist should be empty after this operation.
	/*
	For example, if the list has 3 students:
	s1 <-> s2 <-> s3
	and otherList has 2 students
	s4 <-> s5
	then after mergeList the currently list should have all 5 students
	s1 <-> s2 <-> s3 <-> s4 <-> s5
	and otherList should be empty and have zero students.
	*/
	void StudentList::mergeList(StudentList &otherList) {}

	//create a StudentList of students whose gpa is at least minGPA.
	//Return this list.  The original (current) list should
	//not be modified (do not remove the students from the original list).
	StudentList StudentList::honorRoll(float minGPA) {
		StudentList fixthis;
		return fixthis;
	}
