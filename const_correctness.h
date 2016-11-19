class T {
	char* t;

public:
	/*INSPEKTORI I MUTATORI*/
	//INSPEKTORI IMAJU CONST IZA DEKLARACIJE 

	void inspect() const;   // This member promises NOT to change *this
	void mutate() /*const - ako se doda nece da bude prob*/;     
	// This member function might change *this


	void userCode(T& changeable, const T& unchangeable)
	{
		changeable.inspect();   // Okay: doesn't change a changeable object
		changeable.mutate();    // Okay: changes a changeable object
		unchangeable.inspect(); // Okay: doesn't change an unchangeable object
		//unchangeable.mutate();  // ERROR: attempt to change unchangeable object
	}


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

	/*
	const X& x := referenca x na objekat klase X koji je konstantan
	
	*/

	/*
	X const& x =  const X& x
	*/
	/*
	X& const x nema smisla reference su uvek konstante
	*/




};
