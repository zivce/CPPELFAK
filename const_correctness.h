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
	
	//const X* p := pointer p na objekat klase X koji je konstantan

	/* X* const p := pointer p je konstantan pokazuje na objekat klase X koji
	je non-const, moguca je promena objekta X ali ne pointera p */

	/* const X* const p := -||- objekat klase X je konstantan nista nije moguce
	promeniti. Citati sdesna na levo! 
	*/



};
