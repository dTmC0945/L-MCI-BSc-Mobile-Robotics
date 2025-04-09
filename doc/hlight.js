document.addEventListener('DOMContentLoaded', (event) => {
    document.querySelectorAll('pre div').forEach((block) => {
        hljs.highlightElement(block);
    });
});

hljs.addPlugin(
    new CopyButtonPlugin({
        hook: (text, el) => {
            let { replace, replacewith } = el.dataset;
            if (replace && replacewith) {
                return text.replace(replace, replacewith);
            }
            return text;
        },
        callback: (text, el) => {
            /* logs `gretel configure --key grtf32a35bbc...` */
            console.log(text);
        },
    })
);
hljs.highlightAll();

$(function() {
  $(window).scroll(function() {
    $(":header").each(function() {
      if ($(window).scrollTop() >= $(this).offset().top) {
        var id = $(this).attr('id');
        $('.nav a').removeClass('active');
        $('.nav a[href="#' + id + '"]').addClass('active');
      }
    });
  });
});
