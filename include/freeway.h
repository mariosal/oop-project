#ifndef FREEWAY_H_
#define FREEWAY_H_

#include "segment.h"

namespace oop_project {

class Freeway {
 public:
  Freeway(size_t, size_t, const size_t*, size_t);
  ~Freeway();

  void Operate();

  size_t num_cars() const;
  const std::vector<Segment*>& segments() const;

 private:
  size_t num_cars_;
  std::vector<Segment*> segments_;
};

}  // namespace oop_project

#endif  // FREEWAY_H_
