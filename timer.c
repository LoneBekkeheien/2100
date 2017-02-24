
/* Global variabel for å lagre tidspunktet i millisekunder når døren åpnes. Skal brukes til sammenligning.
*/
int timer_door_opened_ms;

/* Leser av tiden 1 Januar 1970, gjør dette om fra sekunder til millisekunder (1s = 1000ms) og lagrer i timer_ms_door_opened.
*/
void timer_start() {
	
	timer_door_opened_ms = time(NULL) * 1000;
}

/* Etter at døren er åpnet og tiden skrevet ned, sammenlignes denne med en variabel timer_now_md som hele tiden oppdateres. Etter 3s = 3000ms
er løkken ferdig og true returneres. Døren skal nå lukkes.
*/
bool timer_3sec() {
	int timer_now_ms = time(NULL) * 1000;

	while (timer_now_ms < timer_door_opened_ms + 3000) {

		timer_now_ms = time(NULL) * 1000; //oppdaterer tiden

	}

	cout << "Det har gått 3 sekunder, lukk døren!" << endl;
	return true;
}