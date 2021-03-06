#ifndef CAR_H_
#define CAR_H_

#include <cstddef>

namespace project {

class Segment;

class Car {
 public:
  Car(size_t, const Segment*);

  size_t exit() const;

  void set_ready(bool /*ready*/);
  bool ready() const;

  void set_segment(const Segment*);
  const Segment* segment() const;

 private:
  const size_t exit_;
  bool ready_;
  const Segment* segment_;
};

}  // namespace project

#endif  // CAR_H_
