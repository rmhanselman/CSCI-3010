#include <iostream>
#include <string>
#include <vector>

#include "Disease.h"
#include "Creature.h"

std::ostream& operator<<(std::ostream &os, const Creature &c) {
    os << "Creature: " << c.get_age() << std::endl;
    for (Disease * d : c.get_diseases() ) {
        os << *(d) << std::endl;
    }
    return os;
}



void Creature::Spread(Creature * c2) {
    for (Disease * d : this->get_diseases()) {
        if (d->get_is_communicable()) {
            int age = c2->get_age();
            double rand_chance = static_cast <double> (rand()) / static_cast <double> (RAND_MAX);
            if ((age < 20 && rand_chance < d->get_strikes_young_rate()) ||
                (age >= 20 && age < 60 && rand_chance < d->get_strikes_middle_aged_rate()) ||
                (age >= 60 && rand_chance < d->get_strikes_old_rate())) {
                c2->Infect(d);
            }
        }
    }
}

Creature* Creature::Clone(){
  Creature *c = new Creature(0);
  for(auto d:diseases_) {
    if(d->get_is_hereditary()) {
      c->Infect(d);
    }
  }
return c;
}

Creature* Amoeba::Clone(){
  //diseases = get_diseases();
  int new_age = get_age()/2;
  age(-new_age);
  Creature *c = new Amoeba(new_age);
  for(auto d:get_diseases()) {
      c->Infect(d);
  }
return c;
}
