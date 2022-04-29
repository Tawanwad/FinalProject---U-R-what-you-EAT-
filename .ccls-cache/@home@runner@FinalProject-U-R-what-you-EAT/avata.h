class AVATA
{
  private: 
    string name;
    char gender;
    int energy;
    AVATA* next;
  protected:
    
  public: 
    AVATA(string,char,int);
    virtual ~AVATA();
    void insert(AVATA*&);
    AVATA* move_next();
    virtual void show_node();

    void show_energy();
    void EX(int); //เพิ่มenergy
    void F(int); //ลดenergy
};
