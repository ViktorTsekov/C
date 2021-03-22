struct lookupTbl_t{
    void* mat[10][10];
};

typedef struct lookupTbl_t lookupTbl_t;

void tbl_init(lookupTbl_t * tbl);
void tbl_set(lookupTbl_t * tbl, int x, int y, void * ptr);
void* tbl_get(lookupTbl_t * tbl, int x, int y);
void print_matrix(lookupTbl_t* tbl);
void printPtr(void* ptr);
