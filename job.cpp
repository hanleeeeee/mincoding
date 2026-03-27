#include "job.h"
#include "UI.h"

job_sel u4;
job::job(std::string name,float upgrade_hp, float upgrade_w, float upgrade_d) {
	u4.change_job();
}
void job::job_selection(Unit& u, std::string job_select) {
	if (job_select == "warrior") {
		u.change_job("warrior", 2, 0.5, 1.5);

	}
	else if (job_select == "magician") {
		u.change_job("magician", 0.5, 2, 0.5);
	}
	else if (job_select == "shooter") {
		u.change_job("shooter", 0.8, 1.5, 0.7);
	}
}





