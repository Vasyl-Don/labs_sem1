#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "");
	printf("Äîí Âàñèëü IÑ-01\n");
	float M, N; //²í³ö³àë³çàö³ÿ çì³ííèõ
	int D, Mol, St;
	using namespace std;
	cout << "Ââåäiòü ÷èñëî M: ";//Ââåäåííÿ çì³ííèõ
	cin >> M;
	cout << "Ââåäiòü ÷èñëî N: ";
	cin >> N;
	cout << M / N << endl;
	D = M / N;//Îá÷èñëåííÿ ÷àñòêè
	Mol = D % 10;//Ìîëîäøà öèôðà öiëî¿ ÷àñòèíè
	St = (M / N - D) * 10;//Ñòàðøà öèôðà äðîáîâî¿ ÷àñòèíè
	cout << "Ìîëîäøà öèôðà öiëî¿ ÷àñòèíè ÷àñòêè âiä äiëåííÿ M íà N: " << Mol << endl ;//Âèâåäåííÿ ðåçóëüòàòó
	cout << "Ñòàðøà öèôðà äðîáîâî¿ ÷àñòèíè ÷àñòêè âiä äiëåííÿ M íà N: " << St << endl ;

	return 0;
}
