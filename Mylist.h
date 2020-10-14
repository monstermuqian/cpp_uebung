class Mylist {
private:
	double mylist_after[1000]{};
	double mylist_before[1000]{};
	int count = 0;
	double temp; 
	char flag;
	double sum;

public:
	Mylist();
	~Mylist();
	void add(double temp);
	void sort();
	void printlist();
	void average();
};


/*
if (false) {
	Mylist list1;
	list1.sort();
	list1.printlist();
}*/
