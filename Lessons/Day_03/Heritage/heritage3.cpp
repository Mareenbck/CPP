class Quadruped
{
	private:
		std::string name; // accessible que depuis l'objet Quadruped

	protected:
		Leg leg[4]; // accessible depuis Quadruped et ses objets derives

	public:
		void run(); // accessible partout
};

class Dog : public Quadruped // peut acceder a run et legs
{

};

int main() // peut acceder seulement a run()
{

};
