#include "car.h"

namespace project {

Car::Car(size_t exit_junction, Segment* segment)
  : exit_junction_(exit_junction), ready_(false), segment_(segment) {
}

size_t Car::exit_junction() const {
  return exit_junction_;
}

void Car::set_ready(bool ready) {
  ready_ = ready;
}

bool Car::ready() const {
  return ready_;
}

void Car::set_segment(Segment* segment) {
  segment_ = segment;
}

const Segment* Car::segment() const {
  return segment_;
}

}  // namespace project
