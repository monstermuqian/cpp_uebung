/*
* Diese Code sind von mir geschrieben, um die Probleme über Linked-List zu loesen.
* Nachdem ich erfolgreich den Bedarf erfuellt und die Ueberprüfung des Webseite gepasst habe,
* werde ich alle Verfahren in diesem Class zusammenfassen, um eine Werkzeugspakete herzustellen.
* Somit kann ich vielleicht in der zukuenftigen Codierungsaufgabe die Werkzeuge benutzen.
* 
* Die ausfuehrlichen Funtionalitaeten werden schon in der ListNodeSolution.cpp realisiert. Wenn 
* Sie ggf. noch weiter dafuer interessiert sind, kann ich bei der weiteren Kommunikation Ihnen 
* schicken.
* 
* Muqian Chen, 14.10.2020
*/




struct ListNode {
	int val;
	ListNode* next;
	//ListNode(int x) : val(x), next(NULL) {}
	ListNode(int value, ListNode* nextl = nullptr) {
		val = value;
		next = nextl;
	}
};



class ListNodeSolution {
private:
	int pos = 0;
	int temp_result = 0;
	int temp = 0;
	int index = 0;

public:
	int length(ListNode* l1);
	void moreZero(ListNode* l1, int len1, int len2);
	void printListNode(ListNode* l1);
	int  get_sum(ListNode* l1, ListNode* l2, int sum, int pos = 0, int temp_result = 0);
	bool ifoverflow(int sum, int len);
	int  get_nodenumber(int sum, int index);
	void new_ListNode(bool flag, ListNode* l1, int sum, int len, int temp_node);
	ListNode* delLastNNode(ListNode* l1, int n);
};


/*
ListNodeSolution solution;


//其实就一个重点，就是让p->next永远保持nullptr而不是让p指向nullptr
//使用自定义的结构体的构造函数能够更快速地定义链表成员
//Definiert das erste Linked-List 1->3->2->1
ListNode* fifthPrt1 = new ListNode(6);
ListNode* fourthPrt1 = new ListNode(9, fifthPrt1);
ListNode* thirdPtr1 = new ListNode(9, fourthPrt1);
ListNode* secondPtr1 = new ListNode(9, thirdPtr1);
ListNode* head1 = new ListNode(9, secondPtr1);

//definiert das zweite
//ListNode* thirdPtr2 = new ListNode(9);
//ListNode* secondPtr2 = new ListNode(9, thirdPtr2);
//ListNode* head2 = new ListNode(9, secondPtr2);
ListNode* head2 = new ListNode(9);


//definiert einen Zeiger, um das Linked-List durchzulesen.
ListNode* p1 = head1;
ListNode* p2 = head2;

//berechnet die Laenge des Linked-List
int len1 = solution.length(p1);
int len2 = solution.length(p2);
int len = 0;

//Vergleich die beiden Länge und ergänzt die Nulle auf das kuerzere Linked-List 
if (len1 > len2) {
	//保存最长长度留给后用
	len = len1;
	solution.moreZero(p2, len1, len2);
}
else {
	len = len2;
	solution.moreZero(p1, len2, len1);
}

p1 = head1;
p2 = head2;

//Lass es ausdruecken und schau, ob es erfolgreich ergaenzt wird.
cout << "打印一波链表1" << endl;
solution.printListNode(p1);

cout << endl;

cout << "打印一波链表2" << endl;
solution.printListNode(p2);
cout << endl;

p1 = head1;
p2 = head2;

//Liest die einzelne Elemente von dem beiden Linked-List und addiert sie.
int sum = 0;
sum = solution.get_sum(p1, p2, sum);
cout << "打印两个链表元素的和" << sum << endl;

//Beurteilt, ob das Summand der einzelnen Elemente ueber 10 beträgt.
bool flag = solution.ifoverflow(sum, len);


//Schliesslich benutzt man das Summand als einzelne Elemente und stellt damit 
//ein neue Linked-List her.
//Zum Beispiel beträgt das Summand 12345 aus den einzelnen Elementen von den beiden Linked-List.
//Dann ist das Ziel, um ein neue Linked-List 5->4->3->2->1 herzustellen.

//Zuerst bekommt man das Kopf des Linked-Lists.
int temp_node = solution.get_nodenumber(sum, 1);
ListNode* head3 = new ListNode(temp_node);


//Und dann das durchlesende Zeiger
ListNode* p3 = head3;

//Und dann benutzt man das Summand um das neue Linked-List herzustellen.
solution.new_ListNode(flag, p3, sum, len, temp_node);
p3 = head3;

cout << "打印新链表" << endl;
solution.printListNode(p3);
cout << endl;

cout << "链表一的长度是" << len1 << endl;
cout << "链表二的长度是" << len2 << endl;
*/