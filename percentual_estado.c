#include <stdio.h>

int main() {
    // Valores de faturamento por estado
    double sp = 67836.43;
    double rj = 36678.66;
    double mg = 29229.88;
    double es = 27165.48;
    double outros = 19849.53;

    // Calculando o faturamento total
    double faturamento_total = sp + rj + mg + es + outros;

    // Calculando os percentuais de cada estado
    double percentual_sp = (sp / faturamento_total) * 100;
    double percentual_rj = (rj / faturamento_total) * 100;
    double percentual_mg = (mg / faturamento_total) * 100;
    double percentual_es = (es / faturamento_total) * 100;
    double percentual_outros = (outros / faturamento_total) * 100;

    // Exibindo os resultados
    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", percentual_sp);
    printf("RJ: %.2f%%\n", percentual_rj);
    printf("MG: %.2f%%\n", percentual_mg);
    printf("ES: %.2f%%\n", percentual_es);
    printf("Outros: %.2f%%\n", percentual_outros);

    return 0;
}
