class A;
class B1 : public A;
class B2 : public A;
class C1 : public B1;
class C2 : private B1;
class C3 : public B2;
