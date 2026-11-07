#include <iostream>
#include <vector>
using namespace std;


struct Product{
    string id;
    string name;
    string category;
    double price;
    double rating;
    bool inStock;

    Product(string id, string name, string category, double price, double rating, bool inStock) : id(id), name(name), category(category), price(price), rating(rating), inStock(inStock) {}
};

class Catalog{
private:
    // create a list of products
    vector<Product> products;

public:
    // add products to catalog; make sure not to modify product
    void addProduct(const Product& p){
        products.push_back(p);
    }

    // init all filters to not be active
    vector<Product> filterBy (const string& category = "", double minPrice = -1, double maxPrice = -1, double minRating = -1, const bool& inStockOnly = false) const {
        vector<Product> finalList;

        for (const auto& p : products){
            // if category filter is active && category does not match, skip
            if (!category.empty() && p.category != category) continue;
            // if minPrice filter is active && product's price < minPrice skip
            if (minPrice != -1 && p.price < minPrice) continue;
            // if product's price is > max price they want to see, skip
            if (maxPrice != -1 && p.price > maxPrice) continue;
            // if product rating < minRating, then skip
            if (minRating != -1 && p.rating < minRating) continue;
            // if instockonly filter is on and product is not in stock, then skip
            if (inStockOnly != false && p.inStock == false) continue;
            finalList.push_back(p);
        };
    }
};







int main(){
    return 0;
}