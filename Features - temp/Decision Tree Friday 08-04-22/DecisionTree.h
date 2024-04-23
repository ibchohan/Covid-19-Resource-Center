#ifndef DECISIONTREE_H
#define DECISIONTREE_H

class DecisionTree{
	private:
		// Low Risk
		char Fever;
		char SoreThroat;
		char Heacdache;
		char RunnyNose;
		char BodyAches;
		char Dirhea;
		// High Risk
		char Cough;
		char DifficultyBreathing;
		char LossTaste_Smell;

	public:
		DecisionTree();	// DEFAULT CONSTRUCTOR
		
		void Choice();
		void CheckTested();
		void CheckVaccinated();
};

#endif
