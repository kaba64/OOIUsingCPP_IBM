#include <string>
using namespace std;

class Product{
private:
  int productId;
  string productName;
  double quantity;
  double unitPrice;
public:
  Product(){}
  Product(int productIdIn, string productNameIn, double quantityIn, double unitPriceIn)
    :productId(productIdIn),productName(productNameIn),quantity(quantityIn),unitPrice(unitPriceIn){}
  void setProductId(int productIdIn){productId=productIdIn;}
  void setProductName(string productNameIn){productName=productNameIn;}
  void setQuantity(double quantityIn){quantity=quantityIn;}
  void setUnitPrice(double unitPriceIn){unitPrice=unitPriceIn;}
  int getProductId()const{return productId;}
  string getProductName()const{return productName;}
  double getQuantity()const{return quantity;}
  double getUnitPrice()const{return unitPrice;}
  double calculateBillAmount(){return unitPrice*quantity;};
  friend void setDiscount(Product &product, double discount);
};
