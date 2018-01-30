/* Grade                       */
/* Calculates the user's grade */
/* Alex Kastanek               */

#include <stdio.h>

int main(void)
{
	int projCount, projNum, quizCount, quizNum, midCount, midNum, p = 0, q = 0, m = 1;
	float projAvg, projTot, quizAvg, quizTot, midAvg, midTot, finProj, finExam, finAvg, ovrAvg, x, y, yP = 0.0f, yQ = 0.0f, yM = 0.0f;

	printf("Please enter the number of projects (not including the final project): ");
	scanf("%d", &projCount);
	projNum = projCount;
	for ( ; projNum > 0 ; projNum--) {
		printf("Please enter your grade for project(%d): ", p);
		scanf("%f", &y);
		if (y < 0.0f || y > 100.0f) {
			if (y == -1.0f) {
				x = 100.0f + yP;
				yP = x;
				p++;
				printf("Grade unknown, assuming user scored a perfect score.\n");
			} else {
				printf("Invalid grade. Restarting process.\n");
				projNum++;
				p = 0;
			}
		} else {
			x = y + yP;
			yP = x;
			p++;
		}
	}
	projTot = x;
	projAvg = x / projCount;
	printf("Your average project grade is %.2f\n", projAvg);
		
	printf("Please enter the number of midterm exams (not including the final exam): ");
	scanf("%d", &midCount);
	midNum = midCount;
	for ( ; midNum > 0 ; midNum--) {
		printf("Please enter your grade for midterm %d: ", m);
		scanf("%f", &y);
		if (y < 0.0f || y > 100.0f) {
			if (y == -1.0f) {
				x = 100.0f + yM;
				yM = x;
				m++;
				printf("Grade unknown, assuming user scored a perfect score.\n");
			} else {
				printf("Invalid grade. Restarting process.\n");
				midNum++;
				m = 0;
			}
		} else {
			x = y + yM;
			yM = x;
			m++;
		}
	}
	midTot = x;
	midAvg = x / midCount;
	printf("Your average midterm grade is %.2f\n", midAvg);

	printf("Please enter the number of quizzes: ");
	scanf("%d", &quizCount);
	quizNum = quizCount;
	for ( ; quizNum > 0 ; quizNum--) {
		printf("Please enter your grade for quiz(%d): ", q);
		scanf("%f", &y);
		if (y < 0.0f || y > 100.0f) {
			if (y == -1.0f) {
				x = 100.0f + yQ;
				yQ = x;
				q++;
				printf("Grade unknown, assuming user scored a perfect score.\n");
			} else {
				printf("Invalid grade. Restarting process.\n");
				quizNum++;
				q = 0;
			}
		} else {
			x = y + yQ;
			yQ = x;
			q++;
		}
	}
	quizTot = x;
	quizAvg = x / quizCount;
	printf("Your average quiz grade is %.2f\n", quizAvg);

	printf("Please enter your grade for the final project: ");
	scanf("%f", &finProj);

	printf("Please enter your grade for the final exam: ");
	scanf("%f", &finExam);

	finAvg = (midTot + finProj + finExam) / (midCount + 2);

	ovrAvg = (projAvg * .4) + (finProj * .1) + (midAvg * .2) + (quizAvg * .1) + (finExam * .2);

	printf("------------------------------\n");

	printf("Average projects grade: %.2f\n", projAvg);
	printf("Average exam grade: %.2f\n", finAvg);
	printf("Average quiz grade: %.2f\n", quizAvg);
	printf("Final Grade: %.2f\n", ovrAvg);
	if (((projTot + finProj) / projCount + 1) >= 73 && ((quizTot + midTot + finExam) / quizCount + midCount + 1) >= 73 && ovrAvg >= 73) {
		printf("You can take cs202!\n");
	} else printf("Sorry, you can't take cs202.\n");

	printf("------------------------------\n");

return 0;
}
