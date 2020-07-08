class Person {
public:
	int id;
};

class Student :virtual public Person {};
class Worker :virtual public Person {};
class StudentWorker :public Student, public Worker {
public :
	int getId() { return id; } //모호성 컴파일 에러 
};