require.config({
    paths: {
        jquery: 'libs/jquery-min',
        underscore: 'libs/underscore-amd-min',
        backbone: 'libs/backbone-amd-min',
        text: 'libs/require.text',
        mustache: 'libs/mustache'
    }
});

require(['views/home', 'controllers/home', 'controllers/pessoa'], function(HomeView, HomeController, PessoaController) {
    new HomeController;
    new PessoaController;
    
    Backbone.history.start({pushState: false});
});