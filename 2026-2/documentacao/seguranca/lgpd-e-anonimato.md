# Documento de Diretrizes e Garantia de Anonimato para o usuário

## Sistema Web de Questionário

Plano de Garantia de Não Coleta de Dados Pessoais Identificáveis (PII)

A arquitetura do sistema baseia-se no princípio de _Privacy by Design_ (Privacidade desde a Concepção), garantindo o anonimato absoluto dos respondentes por meio do Módulo de Geração de Senhas. Para assegurar que nenhuma PII seja coletada sem consentimento:

- Autenticação Desvinculada: O acesso aos questionários será feito exclusivamente por meio de senhas alfanuméricas aleatórias, geradas em lote e distribuídas fora do sistema. Não haverá criação de perfil, login com e-mail ou vínculo entre a senha gerada e a identidade do aluno, professor ou colaborador.

- Minimização de Logs de Sistema: O sistema será configurado para não armazenar endereços IP, geolocalização ou identificadores de dispositivo (User-Agent) nos bancos de dados de respostas. Arquivos de log do servidor serão expurgados periodicamente e usados apenas para segurança temporária contra ataques.

- Validação de Perguntas Abertas: Como o sistema permite "Resposta aberta (texto)", os Gestores Educacionais receberão orientações na interface de criação para não solicitarem dados sensíveis (como nome, CPF, orientação sexual ou religião) nos enunciados. Um aviso no momento de responder lembrará o participante de não incluir informações que o identifiquem nas caixas de texto livre.

---

## Política de Retenção e Exclusão dos Dados Coletados

O ciclo de vida dos dados dentro do sistema respeitará os princípios da finalidade e necessidade da LGPD:

- Período de Retenção: Os dados (respostas anonimizadas e estatísticas de senhas utilizadas) serão mantidos no banco de dados ativo apenas durante o período de aplicação da pesquisa e pelo tempo necessário para a extração dos relatórios analíticos e dashboards pelos Gestores Educacionais. Define-se o prazo padrão de **12 meses** após a mudança do status da pesquisa para "inativa", cobrindo o ciclo letivo e a documentação de projetos integradores institucionais.

---

# Modelo de Termo de Consentimento Livre e Esclarecido (TCLE) / Aviso de Privacidade

// **Nota de implementação!** Este termo deve ser exibido na tela inicial do Módulo de Aplicação da Pesquisa, logo após o usuário inserir sua senha de acesso e antes de visualizar o questionário. O botão para prosseguir servirá como aceite explícito.

AVISO DE PRIVACIDADE E CONSENTIMENTO ([TCLE](https://www.gov.br/hubrasil/pt-br/hospitais-universitarios/regiao-nordeste/hupes-ufba/ensino-e-pesquisa/pesquisa-e-inovacao-tecnologica/submissao-de-projetos-1/tcle.doc))

Você está sendo convidado(a) a participar de uma pesquisa institucional gerida pelo sistema de Gestão de Pesquisas por Questionário. Antes de iniciar, é importante que você compreenda como suas informações serão tratadas, em conformidade com a Lei Geral de Proteção de Dados [LGPD - Lei nº 13.709/2018](https://www.planalto.gov.br/ccivil_03/_ato2015-2018/2018/lei/l13709.htm).

1. Anonimato e Coleta de Dados:
   A sua participação é totalmente anônima. O acesso a este questionário foi feito por meio de uma senha aleatória de uso único. O sistema não coleta seu nome, e-mail, prontuário, IP ou qualquer dado que possa identificá-lo(a).

2. Finalidade:
   Os dados coletados referem-se exclusivamente às suas respostas ao questionário e serão utilizados de forma agregada para gerar estatísticas, indicadores e relatórios analíticos com o objetivo de melhoria institucional.

3. Cuidados nas Respostas Abertas:
   Nas perguntas que exigem respostas em texto livre, pedimos que não inclua nomes, números de documentos ou informações pessoais que possam identificá-lo(a) ou identificar terceiros.

4. Voluntariedade:
   Sua participação é voluntária. Você pode desistir de responder a qualquer momento fechando o navegador antes de enviar o questionário finalizado, sem nenhuma penalidade.

5. Retenção de Dados:
   As respostas anonimizadas serão armazenadas de forma segura apenas pelo tempo necessário para a análise dos resultados, sendo excluídas permanentemente após a conclusão do ciclo da pesquisa.

**Ao clicar em "Li, concordo e desejo iniciar o questionário", você confirma que está ciente das condições descritas acima e consente com a coleta de suas respostas de forma anônima.**

**( )** Li, concordo e desejo iniciar o questionário
**[ BOTÃO: INICIAR PESQUISA ]**
