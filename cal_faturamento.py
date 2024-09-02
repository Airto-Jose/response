import json

# Carregando os dados do faturamento a partir de um arquivo JSON
with open('faturamento.json', 'r') as f:
    dados = json.load(f)

faturamento_diario = dados['faturamento_diario']

# Filtra os dias com faturamento maior que zero (ignora dias sem faturamento)
faturamentos_validos = [dia['valor'] for dia in faturamento_diario if dia['valor'] > 0]

# Cálculo do menor e maior valor de faturamento
menor_faturamento = min(faturamentos_validos)
maior_faturamento = max(faturamentos_validos)

# Cálculo da média mensal (considerando apenas os dias com faturamento)
media_mensal = sum(faturamentos_validos) / len(faturamentos_validos)

# Número de dias com faturamento superior à média mensal
dias_acima_da_media = len([valor for valor in faturamentos_validos if valor > media_mensal])

# Exibindo os resultados
print(f"Menor faturamento diário: {menor_faturamento}")
print(f"Maior faturamento diário: {maior_faturamento}")
print(f"Número de dias com faturamento acima da média mensal: {dias_acima_da_media}")
