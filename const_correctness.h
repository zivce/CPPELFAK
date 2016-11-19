class T {
	char* t;

public:
	void g1(char*& x);
	void f1(const char*& y) {
		//g1(y);
		//nije dozvoljeno jer je y const *
		/*const*/ char* localS;
		g1(localS);//dozvoljeno jer localS nije const

	}
};
