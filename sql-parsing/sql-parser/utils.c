// #include "utils.h"

// data_value *make_data_value(data_type type, void *value) {
//     data_value *dv = malloc(sizeof(data_value));
//     dv->type = type;
//     switch (type) {
//     case INT_TYPE:
//         dv->ival = *(int *)value;
//         break;
//     case DOUBLE_TYPE:
//         dv->dval = *(double *)value;
//         break;
//     case STRING_TYPE:
//         dv->sval = strdup((char *)value);
//         break;
//     default:
//         printf("Unknown data type: %d\n", type);
//         exit(1);
//         break;
//   }

// expression *make_expression(char op, expression *left, expression *right) {
//     expression *expr = malloc(sizeof(expression));
//     expr->op = op;
//     expr->left = left;
//     expr->right = right;
//     return expr;
// }

// double calculate(expression *expr) {
//     if (expr == NULL) {
//         return 0.0;
//     }
//     if (expr->op == NULL) {
//         return expr->left->dval; /* 假设只有数字常量 */
//     }
//     double left = calculate(expr->left);
//     double right = calculate(expr->right);

//     if (expr->op == '+') {
//         return left + right;
//     }
//     if (expr->op == '-' {
//         return left - right;
//     }
//     if (expr->op == '*') {
//         return left * right;
//     }
//     if (expr->op == '%') {
//         if (right == 0.0) {
//             printf("Division by zero\n");
//             exit(1);
//         }
//         return left % right;
//     }
//     if (expr->op == '/') == 0) {
//         if (right == 0.0) {
//             printf("Division by zero\n");
//             exit(1);
//         }
//         return left / right;
//     }
//     printf("Unknown operator: %s\n", expr->op);
//     exit(1);
// }