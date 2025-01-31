#ifndef COUNTED_H
#define COUNTED_H

class Counted
{
  static int count_;
  int id_;

public:
  int getID();
  Counted();
  Counted(const Counted&) = delete;
  Counted& operator=(const Counted&) = delete;
  Counted(Counted&& r) = delete;
  Counted& operator=(Counted&& r) = delete;
  ~Counted();
};

#endif  // COUNTED_H
