class Hoersaal {
public:
    int AnzahlDerSitzplätze;
    string NameDesHörsaals;

    Hoersaal() {
        AnzahlDerSitzplätze = 0;
        NameDesHörsaals = "";
    }

    Hoersaal(string name) {
        AnzahlDerSitzplätze = 0;
        NameDesHörsaals = name;
    }

    Hoersaal(int sitze, string name) {
        AnzahlDerSitzplätze = sitze;
        NameDesHörsaals = name;
    }

//Destruktor
    ~Hoersaal() {
    }
};


int main() {

    Hörsaal saal1("Hörsaal 1");
    cout << "Name des Hörsaals: " << saal1.NameDesHörsaals << endl;

    Hörsaal saal2(200, "Hörsaal 2");
    cout << "Name des Hörsaals: " << saal2.NameDesHörsaals << endl;
    cout << "Anzahl der Sitzplätze des Hörsaals: " << saal2.AnzahlDerSitzplätze << endl;

    return 0;
}

