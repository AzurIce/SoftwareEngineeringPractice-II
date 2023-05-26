#include <vector>
#include <variant>
#include <string>
// #include <map>

using namespace std;

class ASTNode {
private:
    vector<ASTNode> childs = {};
public:
    ASTNode(){}
    ASTNode(initializer_list<ASTNode> childs): childs(childs){}
    string toString() {
        string res = "<ASTNode, [";
        for (int i = 0; i < childs.size(); i++) {
            res += childs[i].toString();
            if (i != childs.size() - 1) res += ", ";
        }
        res += "]>";
        return res;
    }
};

class ValueNode: ASTNode {
private:
    variant<int, double, string, bool> value;
public:
    ValueNode(variant<int, double, string, bool> value): value(value) {}
    string toString() {
        switch(value.index()) {
            case 0:
                return sprintf("<Value, %d", get<int>(value));
            case 1:
                return sprintf("<Value, %d", get<double>(value));
            case 2:
                return sprintf("<Value, %d", get<string>(value));
            case 3:
                return sprintf("<Value, %d", get<int>(value));
            default:
                return "<Value, ?>";
        }
    }
}

class ValueOperatorNode: ASTNode {
private:
    string operator;
    ASTNode a, b;
public:
    ValueOperatorNode(string operator, ASTNode a, ASTNode b): operator(operator), a(a), b(b) {}
    string toString() {
        string res = "<ValueOperatorNode, " + operator + ", ";
        res += a.toString() + ", ";
        res += b.toString();
        res += ">";
        return res
    }
}
