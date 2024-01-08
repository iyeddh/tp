#include<iostream>
#include<string>
using namespace std;
class Etudient {
  private:
  static int compteurMatricule;
  int matricule;
  string nom;
  int nbrnote;
  double* tabnote;
  public:
        Etudient() : matricule(++compteurMatricule), nom(""), nbrnote(0), tabnote(nullptr) {}

        Etudient(const string& nom, int nbrNotes) : matricule(++compteurMatricule), nom(nom), nbrnote(nbrNotes) {
            tabnote = new double[nbrNotes];
        }
        ~Etudient() {
            delete[] tabnote;
        }
      Etudient(const Etudient& autreEtudiant) : matricule(++compteurMatricule), nom(autreEtudiant.nom),nbrnote(autreEtudiant.nbrnote) {
            tabnote = new double[nbrnote];
            for (int i = 0; i < nbrnote; i++) {
                tabnote[i] = autreEtudiant.tabnote[i];
            }
        }
        int getMatricule() const {
            return matricule;
        }

        // Getter et setter pour le nom
        string getNom() const {
            return nom;
        }

        void setNom(const string& nouveauNom) {
            nom = nouveauNom;
        }

        // Getter pour le nombre de notes
        int getNbrNotes() const {
            return nbrnote;
        }

        // Getter et setter pour le tableau de notes
        double* getTabNotes() const {
            return tabnote;
        }

        void setTabNotes(double* nouvellesNotes, int nouvelleTaille) {
            delete[] tabnote;
            tabnote = new double[nouvelleTaille];

            // Copie des nouvelles notes
            for (int i = 0; i < nouvelleTaille; ++i) {
                tabnote[i] = nouvellesNotes[i];
            }

            nbrnote = nouvelleTaille;
        }
         void saisie() {
            cout << "Saisie des notes pour l'etudiant " << matricule << " (" << nom << ") :" <<endl;
            delete[] tabnote;
            tabnote = new double[nbrnote];

            for (int i = 0; i < nbrnote; ++i) {
                cout << "Note " << i + 1 << ": ";
                cin >> tabnote[i];
            }
        }
        void affichage() const {
            cout << "Etudiant - Matricule: " << matricule << ", Nom: " << nom << ", Nombre de notes: " << nbrnote << endl;
            cout << "Notes : ";
            for (int i = 0; i < nbrnote; ++i) {
                cout << tabnote[i] << " ";
            }
            cout <<endl;
        }
        float moyenne() const {
            if (nbrnote == 0) {
                return 0.0;
            }

            double somme = 0.0;
            for (int i = 0; i < nbrnote; ++i) {
                somme += tabnote[i];
            }
            return static_cast<float>(somme / nbrnote);
        }
        bool admis() const {
            return moyenne() >= 10.0;
        }
        static bool comparer(const Etudient& etudiant1, const Etudient& etudiant2) {
            return etudiant1.moyenne() == etudiant2.moyenne();
        }

};
int Etudient::compteurMatricule=0;
int main(){
  // Exemples d'utilisation de la classe Etudiant
    Etudient etudiant1("Alice", 3);
    Etudient etudiant2("Bob", 3);

    etudiant1.saisie(); // Saisie des notes pour l'étudiant 1
    etudiant2.saisie(); // Saisie des notes pour l'étudiant 2

    // Affichage des informations des étudiants
    etudiant1.affichage();
    etudiant2.affichage();

    // Affichage de la moyenne et du statut d'admission
    cout << "Moyenne et admission pour l'etudiant 1 : " << etudiant1.moyenne() << ", " << (etudiant1.admis() ? "Admis" : "Non admis") <<endl;
    cout << "Moyenne et admission pour l'etudiant 2 : " << etudiant2.moyenne() << ", " << (etudiant2.admis() ? "Admis" : "Non admis") <<endl;

    // Comparaison des moyennes
    cout << "Comparaison des moyennes entre l'etudiant 1 et l'etudiant 2 : " << (Etudient::comparer(etudiant1, etudiant2) ? "Mêmes moyennes" : "Moyennes différentes") << std::endl;
}